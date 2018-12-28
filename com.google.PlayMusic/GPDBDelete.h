//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPDBWriteStatement.h"

@class NSMutableArray;

@interface GPDBDelete : GPDBWriteStatement
{
    NSMutableArray *_conditions;
}

+ (id)deleteFromTable:(id)arg1;
- (void).cxx_destruct;
- (id)execute;
- (void)executePostPrepareActions;
- (id)SQL:(id)arg1;
- (id)notConditionForCondition:(id)arg1;
- (id)andConditionWithSubconditions:(id)arg1;
- (id)andCondition;
- (id)orConditionWithSubconditions:(id)arg1;
- (id)orCondition;
- (id)lessThanCondition:(id)arg1 field:(id)arg2 includeEqual:(_Bool)arg3;
- (id)greaterThanCondition:(id)arg1 field:(id)arg2 includeEqual:(_Bool)arg3;
- (id)inCondition:(id)arg1 field:(id)arg2 query:(id)arg3;
- (id)nullCondition:(id)arg1 field:(id)arg2;
- (id)emptyCondition:(id)arg1 field:(id)arg2;
- (id)equalCondition:(id)arg1 field:(id)arg2;
- (void)addCondition:(id)arg1;
- (id)initWithTable:(id)arg1;

@end

