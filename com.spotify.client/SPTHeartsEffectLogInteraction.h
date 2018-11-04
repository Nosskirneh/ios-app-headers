//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTHeartsEffect.h"

@class SPTHeartsContextURI, SPTHeartsTrackURI, SPTLogMessage;

@interface SPTHeartsEffectLogInteraction : SPTHeartsEffect
{
    SPTHeartsContextURI *_contextURI;
    SPTHeartsTrackURI *_trackURI;
    SPTLogMessage *_logMessage;
}

@property(retain, nonatomic) SPTLogMessage *logMessage; // @synthesize logMessage=_logMessage;
@property(copy, nonatomic) SPTHeartsTrackURI *trackURI; // @synthesize trackURI=_trackURI;
@property(copy, nonatomic) SPTHeartsContextURI *contextURI; // @synthesize contextURI=_contextURI;
- (void).cxx_destruct;
- (id)initWithContextURI:(id)arg1 trackURI:(id)arg2 logMessage:(id)arg3;

@end
