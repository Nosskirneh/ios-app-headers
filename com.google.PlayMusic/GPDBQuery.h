//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPDBReadStatement.h"

@class NSArray, NSMapTable, NSMutableArray;

@interface GPDBQuery : GPDBReadStatement
{
    NSMutableArray *_tableJoinInfos;
    NSMutableArray *_conditions;
    NSMutableArray *_groupFieldExpressions;
    NSMutableArray *_havingConditions;
    NSMutableArray *_sorts;
    unsigned long long _offsetPosition;
    NSMapTable *_fieldPositionMap;
    unsigned long long _currentFieldPosition;
    GPDBQuery *_subquery;
    _Bool _distinct;
    _Bool _hasOffset;
    _Bool _hasLimit;
}

+ (id)queryWithSubquery:(id)arg1;
+ (id)queryWithTable:(id)arg1;
@property(nonatomic) _Bool hasLimit; // @synthesize hasLimit=_hasLimit;
@property(nonatomic) _Bool hasOffset; // @synthesize hasOffset=_hasOffset;
@property(nonatomic) _Bool distinct; // @synthesize distinct=_distinct;
- (void).cxx_destruct;
- (void)generateQueryFieldPosition:(id)arg1;
- (id)queryFieldPosition:(id)arg1;
- (void)bindPosition:(unsigned long long)arg1 value:(id)arg2;
- (id)resultAsInteger:(id)arg1;
- (id)resultAsString:(id)arg1;
- (void)bind:(id)arg1 value:(id)arg2;
- (void)bindOffset:(unsigned long long)arg1;
- (void)bindLimit:(unsigned long long)arg1;
- (void)executePostPrepareActions;
- (id)SQL:(id)arg1;
- (id)notConditionForCondition:(id)arg1;
- (id)existsConditionWithQuery:(id)arg1;
- (id)inCondition:(id)arg1 field:(id)arg2 query:(id)arg3;
- (id)andConditionWithSubconditions:(id)arg1;
- (id)andCondition;
- (id)orConditionWithSubconditions:(id)arg1;
- (id)orCondition;
- (id)lessThanCondition:(id)arg1 field:(id)arg2 otherTable:(id)arg3 otherField:(id)arg4 includeEqual:(_Bool)arg5;
- (id)lessThanCondition:(id)arg1 field:(id)arg2 includeEqual:(_Bool)arg3;
- (id)greaterThanCondition:(id)arg1 field:(id)arg2 otherTable:(id)arg3 otherField:(id)arg4 includeEqual:(_Bool)arg5;
- (id)greaterThanCondition:(id)arg1 field:(id)arg2 includeEqual:(_Bool)arg3;
- (id)nullCondition:(id)arg1 field:(id)arg2;
- (id)emptyCondition:(id)arg1 field:(id)arg2;
- (id)equalCondition:(id)arg1 field:(id)arg2 otherTable:(id)arg3 otherField:(id)arg4;
- (id)equalCondition:(id)arg1 field:(id)arg2;
- (void)addHavingCondition:(id)arg1;
- (void)addCondition:(id)arg1;
- (void)addGroupBy:(id)arg1 fromTable:(id)arg2;
- (void)addGroupBy:(id)arg1;
- (void)addTable:(id)arg1 field:(id)arg2 otherTable:(id)arg3 otherField:(id)arg4 joinType:(long long)arg5;
- (void)addTable:(id)arg1 field:(id)arg2 otherTable:(id)arg3 otherField:(id)arg4;
- (void)addTable:(id)arg1 withConditions:(id)arg2 joinType:(long long)arg3 index:(id)arg4;
- (void)addTable:(id)arg1 withConditions:(id)arg2 joinType:(long long)arg3;
- (void)addTable:(id)arg1 withCondition:(id)arg2 joinType:(long long)arg3;
- (void)addTable:(id)arg1 withConditions:(id)arg2;
- (void)addTable:(id)arg1 withCondition:(id)arg2 index:(id)arg3;
- (void)addTable:(id)arg1 withCondition:(id)arg2;
- (void)addTable:(id)arg1;
- (void)addOrderCondition:(id)arg1 descending:(_Bool)arg2;
- (void)addOrder:(id)arg1 fromTable:(id)arg2 collation:(id)arg3 descending:(_Bool)arg4;
- (void)addOrder:(id)arg1 fromTable:(id)arg2;
- (void)addOrder:(id)arg1 descending:(_Bool)arg2;
- (void)addOrder:(id)arg1;
- (void)addAllFields;
- (void)addField:(id)arg1 fromTable:(id)arg2;
@property(readonly, nonatomic) NSArray *joinedTables;
- (id)initWithSubquery:(id)arg1;
- (id)initWithTable:(id)arg1;

@end

