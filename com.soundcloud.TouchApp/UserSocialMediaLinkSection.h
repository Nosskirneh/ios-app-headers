//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ContentSection-Protocol.h"

@class NSString, UserSocialMediaLinkSectionContentSource, UserSocialMediaLinkSectionHandler, UserSocialMediaLinkSectionPresenter;

@interface UserSocialMediaLinkSection : NSObject <ContentSection>
{
    UserSocialMediaLinkSectionHandler *_handler;
    UserSocialMediaLinkSectionPresenter *_presenter;
    UserSocialMediaLinkSectionContentSource *_source;
}

@property(readonly, nonatomic) UserSocialMediaLinkSectionContentSource *source; // @synthesize source=_source;
@property(readonly, nonatomic) UserSocialMediaLinkSectionPresenter *presenter; // @synthesize presenter=_presenter;
@property(readonly, nonatomic) UserSocialMediaLinkSectionHandler *handler; // @synthesize handler=_handler;
- (void).cxx_destruct;
- (id)initWithHandler:(id)arg1 presenter:(id)arg2 source:(id)arg3;
- (id)initWithUserInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

