//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MFMailComposeViewControllerDelegate-Protocol.h"

@class NSDateFormatter, NSMutableString, NSString;

@interface DZRPlaybackDebugger : NSObject <MFMailComposeViewControllerDelegate>
{
    NSDateFormatter *_dateFormatter;
    NSMutableString *_log;
}

+ (id)sharedDebugger;
@property(retain, nonatomic) NSMutableString *log; // @synthesize log=_log;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
- (void).cxx_destruct;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)prepareDebugMailWithParentViewController:(id)arg1;
- (void)clearLog;
- (id)sharableLog;
- (void)appendDictionary:(id)arg1;
- (void)appendDictionary:(id)arg1 fromSelector:(SEL)arg2 tag:(id)arg3;
- (void)appendString:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

