//  L3TestCaseStartEvent.m
//  Created by Rob Rix on 2012-11-11.
//  Copyright (c) 2012 Rob Rix. All rights reserved.

#import "L3TestCaseStartEvent.h"

@implementation L3TestCaseStartEvent

#pragma mark -
#pragma mark Algebras

-(id)acceptAlgebra:(id<L3EventAlgebra>)algebra {
	return [algebra testCaseStartEventWithTestCase:self.testCase date:self.date];
}

@end
