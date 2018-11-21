//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBAsyncAction-Protocol.h"
#import "SPTContextMenuPresenterDelegate-Protocol.h"

@class NSDictionary, NSString;
@protocol HUBActionContext, HUBAsyncActionDelegate, SPContextMenuFeature, SPTContextMenuOptions, SPTContextMenuPresenter, SPTLogCenter;

@interface SPTContextMenuHubAction : NSObject <SPTContextMenuPresenterDelegate, HUBAsyncAction>
{
    id <HUBAsyncActionDelegate> _delegate;
    id <SPContextMenuFeature> _contextMenuFeature;
    id <SPTLogCenter> _logCenter;
    NSDictionary *_contextMenuEntityData;
    id <SPTContextMenuPresenter> _contextMenuPresenter;
    id <HUBActionContext> _context;
    id <SPTContextMenuOptions> _contextMenuOptions;
}

@property(retain, nonatomic) id <SPTContextMenuOptions> contextMenuOptions; // @synthesize contextMenuOptions=_contextMenuOptions;
@property(retain, nonatomic) id <HUBActionContext> context; // @synthesize context=_context;
@property(retain, nonatomic) id <SPTContextMenuPresenter> contextMenuPresenter; // @synthesize contextMenuPresenter=_contextMenuPresenter;
@property(retain, nonatomic) NSDictionary *contextMenuEntityData; // @synthesize contextMenuEntityData=_contextMenuEntityData;
@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
@property(readonly, nonatomic) id <SPContextMenuFeature> contextMenuFeature; // @synthesize contextMenuFeature=_contextMenuFeature;
@property(nonatomic) __weak id <HUBAsyncActionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)contextMenuPresenterDidDismiss:(id)arg1;
- (id)provideContextMenuOptions;
- (id)tasksForArtistEntityURI:(id)arg1;
- (id)tasksForEntityURI:(id)arg1;
- (_Bool)performWithContext:(id)arg1;
- (id)initWithContextMenuFeature:(id)arg1 logCenter:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

