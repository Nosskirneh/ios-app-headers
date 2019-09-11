//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAdsBaseVoiceModel-Protocol.h"

@class NSString, NSURL;

@interface SPTAdsBaseVoiceModelImplementation : NSObject <SPTAdsBaseVoiceModel>
{
    long long _delay;
    long long _intent;
    NSURL *_uri;
}

@property(readonly, nonatomic) NSURL *uri; // @synthesize uri=_uri;
@property(readonly, nonatomic) long long intent; // @synthesize intent=_intent;
@property(readonly, nonatomic) long long delay; // @synthesize delay=_delay;
- (void).cxx_destruct;
- (long long)parseIntent:(id)arg1;
- (id)initWithDelay:(long long)arg1 intent:(id)arg2 uri:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

