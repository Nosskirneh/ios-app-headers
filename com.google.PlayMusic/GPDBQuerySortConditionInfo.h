//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GPDBQuerySortExpression-Protocol.h"

@class GPDBQueryCondition;

@interface GPDBQuerySortConditionInfo : NSObject <GPDBQuerySortExpression>
{
    GPDBQueryCondition *_condition;
    _Bool _descending;
}

- (void).cxx_destruct;
- (id)expressionForRootStatement:(id)arg1;
- (id)initWithCondition:(id)arg1 descending:(_Bool)arg2;
- (id)init;

@end

