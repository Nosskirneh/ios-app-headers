//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EXP_SPTHubRemoteContentOperationURLResolver.h"

@class NSString;

@interface SPTPersonalizedSetsHubURLResolver : NSObject <EXP_SPTHubRemoteContentOperationURLResolver>
{
    NSString *_locale;
    NSString *_timeZone;
    NSString *_clientVersion;
}

@property(retain, nonatomic) NSString *clientVersion; // @synthesize clientVersion=_clientVersion;
@property(retain, nonatomic) NSString *timeZone; // @synthesize timeZone=_timeZone;
@property(retain, nonatomic) NSString *locale; // @synthesize locale=_locale;
- (void).cxx_destruct;
- (id)resolveContentURL;
- (id)initWithLocale:(id)arg1 timeZone:(id)arg2 clientVersion:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
