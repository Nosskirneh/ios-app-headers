//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPDBWriteStatement.h"

@class GPDBQuery;

@interface GPDBInsert : GPDBWriteStatement
{
    GPDBQuery *_selectionQuery;
    _Bool _replace;
}

+ (id)insertToTable:(id)arg1 selectionQuery:(id)arg2;
+ (id)insertToTable:(id)arg1;
@property(nonatomic) _Bool replace; // @synthesize replace=_replace;
- (void).cxx_destruct;
- (id)execute;
- (void)executePostPrepareActions;
- (id)SQL:(id)arg1;
- (void)addAllFields;
- (id)initWithTable:(id)arg1 selectionQuery:(id)arg2;

@end

