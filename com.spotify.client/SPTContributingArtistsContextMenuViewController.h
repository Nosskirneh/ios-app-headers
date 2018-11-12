//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTContextMenuViewDataSource-Protocol.h"
#import "SPTContextMenuViewDelegate-Protocol.h"

@class NSArray, NSString, SPTContextMenuView, SPTContextMenuViewTransition;
@protocol GLUEImageLoader;

@interface SPTContributingArtistsContextMenuViewController : UIViewController <SPTContextMenuViewDataSource, SPTContextMenuViewDelegate>
{
    NSArray *_contextMenuActions;
    SPTContextMenuView *_contextMenuView;
    SPTContextMenuViewTransition *_transition;
    id <GLUEImageLoader> _imageLoader;
}

@property(retain, nonatomic) id <GLUEImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) SPTContextMenuViewTransition *transition; // @synthesize transition=_transition;
@property(retain, nonatomic) SPTContextMenuView *contextMenuView; // @synthesize contextMenuView=_contextMenuView;
@property(readonly, nonatomic) NSArray *contextMenuActions; // @synthesize contextMenuActions=_contextMenuActions;
- (void).cxx_destruct;
- (_Bool)contextMenuView:(id)arg1 shouldBeDismissedAfterPerformingAction:(id)arg2;
- (void)dismissContextMenuView:(id)arg1 dismissalStyle:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)imageLoaderForContextMenuView:(id)arg1;
- (id)contextMenuView:(id)arg1 titleForHeaderInSection:(unsigned long long)arg2;
- (id)contextMenuView:(id)arg1 actionForIndexPath:(id)arg2;
- (unsigned long long)numberOfActionsInContextMenuView:(id)arg1;
- (void)loadView;
- (id)initWithArtistEntities:(id)arg1 linkDispatcher:(id)arg2 glueImageLoaderFactory:(id)arg3 logCenter:(id)arg4 theme:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

