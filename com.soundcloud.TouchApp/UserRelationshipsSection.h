//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ContentSection-Protocol.h"

@class NSString, UserRelationshipsSectionContentSource, UserRelationshipsSectionHandler, UserRelationshipsSectionPresenter;

@interface UserRelationshipsSection : NSObject <ContentSection>
{
    UserRelationshipsSectionHandler *_handler;
    UserRelationshipsSectionPresenter *_presenter;
    UserRelationshipsSectionContentSource *_source;
}

@property(readonly, nonatomic) UserRelationshipsSectionContentSource *source; // @synthesize source=_source;
@property(readonly, nonatomic) UserRelationshipsSectionPresenter *presenter; // @synthesize presenter=_presenter;
@property(readonly, nonatomic) UserRelationshipsSectionHandler *handler; // @synthesize handler=_handler;
- (void).cxx_destruct;
- (id)initWithHandler:(id)arg1 presenter:(id)arg2 source:(id)arg3;
- (id)initWithUserInfo:(id)arg1 emptyStateFooter:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

