//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TAGLogger-Protocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface TAGDefaultLogger : NSObject <TAGLogger>
{
    int _logLevel;
}

@property int logLevel; // @synthesize logLevel=_logLevel;
- (void)verbose:(id)arg1;
- (void)debug:(id)arg1;
- (void)info:(id)arg1;
- (void)warning:(id)arg1;
- (void)error:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

