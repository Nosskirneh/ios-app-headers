//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPDBQuery.h"

@class GPDBField;

@interface GPDBTableCountQuery : GPDBQuery
{
    GPDBField *_field;
}

+ (id)countTable:(id)arg1 executor:(id)arg2;
- (void).cxx_destruct;
- (id)result;
- (id)initWithTable:(id)arg1;

@end

