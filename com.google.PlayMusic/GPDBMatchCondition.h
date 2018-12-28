//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPDBQueryCondition.h"

@class GPDBExternalContentFTSTable, GPDBField;

@interface GPDBMatchCondition : GPDBQueryCondition
{
    GPDBExternalContentFTSTable *_ftsTable;
    GPDBField *_field;
}

+ (id)matchConditionWithField:(id)arg1 ftsTable:(id)arg2;
+ (id)matchConditionWithFTSTable:(id)arg1;
- (void).cxx_destruct;
- (void)executePostPrepareActions;
- (id)conditionExpression:(id)arg1;
- (id)initWithField:(id)arg1 ftsTable:(id)arg2;

@end

