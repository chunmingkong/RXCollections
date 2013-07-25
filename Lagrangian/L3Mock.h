#ifndef L3_MOCK_H
#define L3_MOCK_H

#if __has_feature(modules)
@import Foundation;
#else
#import <Foundation/Foundation.h>
#endif

#import <Lagrangian/RXFold.h>

@protocol L3Mock;

@interface L3Mock : NSObject

+(id)mockNamed:(NSString *)name initializer:(void(^)(id<L3Mock> mock))initializer;

@end

@protocol L3Mock <NSObject>

-(void)addMethodWithSelector:(SEL)selector types:(const char *)types block:(id)block;

@end

#define L3TypeSignatureEncode(_, type) @encode(type)
#define L3TypeSignature(...) rx_fold(L3TypeSignatureEncode, _, __VA_ARGS__)
const char *L3ConstructTypeSignature(char type[], ...);

#endif // L3_MOCK_H
