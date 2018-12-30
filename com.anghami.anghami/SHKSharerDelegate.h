//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSObject-Protocol.h"
#import "SHKSharerDelegate-Protocol.h"

@class NSString;

@interface SHKSharerDelegate : NSObject <SHKSharerDelegate, NSObject>
{
}

- (void)sharerAuthDidFinish:(id)arg1 success:(_Bool)arg2;
- (void)sharerCancelledSending:(id)arg1;
- (void)sharer:(id)arg1 failedWithError:(id)arg2 shouldRelogin:(_Bool)arg3;
- (void)sharerFinishedSending:(id)arg1;
- (void)sharerStartedSending:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
