//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Launcher.h"

@class NSString, Urn;

@interface SearchHighTierLauncher : Launcher
{
    NSString *_query;
    Urn *_queryUrn;
}

@property(readonly, nonatomic) Urn *queryUrn; // @synthesize queryUrn=_queryUrn;
@property(readonly, nonatomic) NSString *query; // @synthesize query=_query;
- (void).cxx_destruct;
- (void)launchFromSourceViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithQuery:(id)arg1 queryUrn:(id)arg2;

@end

