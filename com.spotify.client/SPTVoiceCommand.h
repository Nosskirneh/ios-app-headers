//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL, SPTPlayerContext, SPTVoiceCommandError, SPTVoiceCommandMedia, SPTVoiceCommandRestriction, SPTVoiceCommandText;

@interface SPTVoiceCommand : NSObject
{
    long long _intent;
    NSURL *_targetURI;
    NSString *_query;
    SPTVoiceCommandRestriction *_restriction;
    SPTVoiceCommandMedia *_media;
    SPTVoiceCommandText *_text;
    NSString *_sessionIdentifier;
    SPTVoiceCommandError *_error;
    SPTPlayerContext *_context;
}

@property(readonly, nonatomic) SPTPlayerContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) SPTVoiceCommandError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSString *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(readonly, nonatomic) SPTVoiceCommandText *text; // @synthesize text=_text;
@property(readonly, nonatomic) SPTVoiceCommandMedia *media; // @synthesize media=_media;
@property(readonly, nonatomic) SPTVoiceCommandRestriction *restriction; // @synthesize restriction=_restriction;
@property(readonly, nonatomic) NSString *query; // @synthesize query=_query;
@property(readonly, nonatomic) NSURL *targetURI; // @synthesize targetURI=_targetURI;
@property(readonly, nonatomic) long long intent; // @synthesize intent=_intent;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1 sessionIdentifier:(id)arg2;
- (id)initWithIntent:(long long)arg1 targetURI:(id)arg2 query:(id)arg3 restriction:(id)arg4 media:(id)arg5 text:(id)arg6 sessionIdentifier:(id)arg7 error:(id)arg8 context:(id)arg9;
- (_Bool)isPlayable;
- (_Bool)spt_isExcludedFromCommandHandling;
- (_Bool)spt_shouldResumePlaybackAfterHandling;

@end

