//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPDBQueryCondition.h"

@class NSMutableArray;

@interface GPDBAndCondition : GPDBQueryCondition
{
    NSMutableArray *_conditions;
}

- (void).cxx_destruct;
- (void)executePostPrepareActions;
- (id)conditionExpression:(id)arg1;
- (void)addConditions:(id)arg1;
- (void)addCondition:(id)arg1;
- (id)init;

@end

