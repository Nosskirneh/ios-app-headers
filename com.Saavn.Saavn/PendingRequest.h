//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PendingRequest : NSObject
{
    _Bool _active;
    int _logSource;
    NSString *_logPath;
}

@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(readonly, copy, nonatomic) NSString *logPath; // @synthesize logPath=_logPath;
@property(readonly, nonatomic) int logSource; // @synthesize logSource=_logSource;
- (void).cxx_destruct;
- (void)deleteLogFile;
- (id)initWithLogSource:(int)arg1 logPath:(id)arg2;

@end

