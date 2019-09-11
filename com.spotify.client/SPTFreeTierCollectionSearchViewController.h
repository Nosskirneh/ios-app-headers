//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "GLUEStyleable-Protocol.h"
#import "SPTSortingFilteringClearFiltersControlDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSLayoutConstraint, NSString, SPTFreeTierCollectionSearchPassthroughView, SPTFreeTierCollectionSearchViewStyle, UIButton, UIStackView, UITextField, UIView;
@protocol SPTFreeTierCollectionSearchViewControllerDelegate, SPTSortingFilteringClearFiltersControl;

@interface SPTFreeTierCollectionSearchViewController : UIViewController <UIViewControllerTransitioningDelegate, SPTSortingFilteringClearFiltersControlDelegate, GLUEStyleable>
{
    UITextField *_searchField;
    id <SPTFreeTierCollectionSearchViewControllerDelegate> _delegate;
    SPTFreeTierCollectionSearchPassthroughView *_containerView;
    UIView *_topBackgroundView;
    UIButton *_cancelButton;
    UIStackView *_stackView;
    SPTFreeTierCollectionSearchViewStyle *_style;
    UIView<SPTSortingFilteringClearFiltersControl> *_clearFiltersControl;
    NSLayoutConstraint *_clearFiltersControlLeadingConstraint;
    NSLayoutConstraint *_clearFiltersControlTrailingConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *clearFiltersControlTrailingConstraint; // @synthesize clearFiltersControlTrailingConstraint=_clearFiltersControlTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *clearFiltersControlLeadingConstraint; // @synthesize clearFiltersControlLeadingConstraint=_clearFiltersControlLeadingConstraint;
@property(retain, nonatomic) UIView<SPTSortingFilteringClearFiltersControl> *clearFiltersControl; // @synthesize clearFiltersControl=_clearFiltersControl;
@property(retain, nonatomic) SPTFreeTierCollectionSearchViewStyle *style; // @synthesize style=_style;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIView *topBackgroundView; // @synthesize topBackgroundView=_topBackgroundView;
@property(retain, nonatomic) SPTFreeTierCollectionSearchPassthroughView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak id <SPTFreeTierCollectionSearchViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UITextField *searchField; // @synthesize searchField=_searchField;
- (void).cxx_destruct;
- (void)clearFiltersControl:(id)arg1 didSelectFilterRuleAtIndex:(long long)arg2;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)cancelButtonPressed:(id)arg1;
- (void)searchFieldDidChange:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)insertFiltersWithTitles:(id)arg1;
- (void)glue_applyStyle:(id)arg1;
- (void)viewDidLoad;
- (id)initWithSearchPlaceholder:(id)arg1 sortingFilteringUIFactory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

