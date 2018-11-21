//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTYourLibraryPageProvider-Protocol.h"

@class NSString, NSURL;

@interface SPTPodcastYourLibraryEpisodesPageProvider : NSObject <SPTYourLibraryPageProvider>
{
    unsigned long long _groupIdentifier;
    unsigned long long _providerIdentifier;
    NSString *_title;
    NSURL *_URI;
}

@property(readonly, nonatomic) NSURL *URI; // @synthesize URI=_URI;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) unsigned long long providerIdentifier; // @synthesize providerIdentifier=_providerIdentifier;
@property(readonly, nonatomic) unsigned long long groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
- (void).cxx_destruct;
- (id)pageViewControllerForContext:(id)arg1;
- (_Bool)claimsURI:(id)arg1;
- (id)initWithURI:(id)arg1 title:(id)arg2 pageProviderIdentifier:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

