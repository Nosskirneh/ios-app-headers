//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierEntityContextMenuButtonViewModel-Protocol.h"

@class NSString, NSURL, SPTPodcastLogger, SPTPodcastViewModel, SPTShowContextMenuController, SPTShowContextMenuControllerOptions, UIView, UIViewController;
@protocol SPTFreeTierEntityContextMenuButtonViewModelDelegate, SPTShowContextMenuControllerDelegate;

@interface SPTPodcastHeaderContextMenuButtonViewModel : NSObject <SPTFreeTierEntityContextMenuButtonViewModel>
{
    id <SPTFreeTierEntityContextMenuButtonViewModelDelegate> delegate;
    unsigned long long state;
    SPTShowContextMenuController *_showContextMenuController;
    SPTPodcastLogger *_logger;
    SPTPodcastViewModel *_viewModel;
    id <SPTShowContextMenuControllerDelegate> _contextMenuDelegate;
    SPTShowContextMenuControllerOptions *_options;
    UIViewController *_inViewController;
    UIView *_senderView;
    NSURL *_URI;
}

@property(retain, nonatomic) NSURL *URI; // @synthesize URI=_URI;
@property(retain, nonatomic) UIView *senderView; // @synthesize senderView=_senderView;
@property(retain, nonatomic) UIViewController *inViewController; // @synthesize inViewController=_inViewController;
@property(retain, nonatomic) SPTShowContextMenuControllerOptions *options; // @synthesize options=_options;
@property(nonatomic) __weak id <SPTShowContextMenuControllerDelegate> contextMenuDelegate; // @synthesize contextMenuDelegate=_contextMenuDelegate;
@property(retain, nonatomic) SPTPodcastViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) SPTPodcastLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) SPTShowContextMenuController *showContextMenuController; // @synthesize showContextMenuController=_showContextMenuController;
@property(readonly, nonatomic) unsigned long long state; // @synthesize state;
@property(nonatomic) __weak id <SPTFreeTierEntityContextMenuButtonViewModelDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)tapContextMenuButton:(id)arg1;
- (void)configureWithViewModel:(id)arg1 delegate:(id)arg2 options:(id)arg3 inViewController:(id)arg4 senderView:(id)arg5 URI:(id)arg6;
- (id)initWithShowContextMenuController:(id)arg1 logger:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

