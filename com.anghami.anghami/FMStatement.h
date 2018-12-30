//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FMStatement : NSObject
{
    struct sqlite3_stmt *_statement;
    NSString *_query;
    long long _useCount;
    _Bool _inUse;
}

@property _Bool inUse; // @synthesize inUse=_inUse;
@property long long useCount; // @synthesize useCount=_useCount;
@property(retain) NSString *query; // @synthesize query=_query;
@property struct sqlite3_stmt *statement; // @synthesize statement=_statement;
- (void).cxx_destruct;
- (id)description;
- (void)reset;
- (void)close;
- (void)dealloc;
- (void)finalize;

@end

