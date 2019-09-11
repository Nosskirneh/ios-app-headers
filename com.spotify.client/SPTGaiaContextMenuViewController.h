//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTContextMenuViewDelegate-Protocol.h"
#import "SPTGaiaContextMenuModelDelegate-Protocol.h"
#import "SPTPageController-Protocol.h"

@class NSString, NSURL, SPTContextMenuView, SPTGaiaContextMenuModel, SPTGaiaLogger, SPTTheme;
@protocol SPTContextMenuViewInteractionTarget, SPTGaiaContextMenuViewControllerDelegate, SPTModalPresentationController, SPTPageContainer;

@interface SPTGaiaContextMenuViewController : UIViewController <SPTContextMenuViewDelegate, SPTGaiaContextMenuModelDelegate, SPTPageController>
{
    id <SPTGaiaContextMenuViewControllerDelegate> _delegate;
    id <SPTContextMenuViewInteractionTarget> _interactionTarget;
    SPTTheme *_theme;
    SPTGaiaContextMenuModel *_model;
    SPTGaiaLogger *_logger;
    id <SPTModalPresentationController> _modalPresentationController;
}

@property(retain, nonatomic) id <SPTModalPresentationController> modalPresentationController; // @synthesize modalPresentationController=_modalPresentationController;
@property(retain, nonatomic) SPTGaiaLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) SPTGaiaContextMenuModel *model; // @synthesize model=_model;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) id <SPTContextMenuViewInteractionTarget> interactionTarget; // @synthesize interactionTarget=_interactionTarget;
@property(nonatomic) __weak id <SPTGaiaContextMenuViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (void)presentViewController:(id)arg1 forAction:(id)arg2;
- (_Bool)contextMenuView:(id)arg1 shouldBeDismissedAfterPerformingAction:(id)arg2;
- (void)dismissContextMenuView:(id)arg1 dismissalStyle:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loadView;
- (id)initWithContextMenuModel:(id)arg1 logger:(id)arg2 modalPresentationController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;
@property(retain, nonatomic) SPTContextMenuView *view; // @dynamic view;

@end

