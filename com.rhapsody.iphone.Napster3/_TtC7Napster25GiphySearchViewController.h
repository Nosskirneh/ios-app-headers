//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RHViewController.h"

@class UICollectionView, UIImageView, UILabel, UISearchBar, UIView;

@interface _TtC7Napster25GiphySearchViewController : RHViewController
{
    // Error parsing type: , name: searchBar
    // Error parsing type: , name: collectionView
    // Error parsing type: , name: headerView
    // Error parsing type: , name: headerViewLabel
    // Error parsing type: , name: headerViewLogo
    // Error parsing type: , name: cellID
    // Error parsing type: , name: loadingCellID
    // Error parsing type: , name: dependencies
    // Error parsing type: , name: initialTerm
    // Error parsing type: , name: viewModel
    // Error parsing type: , name: cellWidth
    // Error parsing type: , name: disposeBag
    // Error parsing type: , name: cancelButton
    // Error parsing type: , name: noDataOverlay
    // Error parsing type: , name: keyboardHeight
    // Error parsing type: , name: completion
    // Error parsing type: , name: paginationNextPageTrigger
    // Error parsing type: , name: offlineBar
    // Error parsing type: , name: margin
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 metricsSource:(id)arg3;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)viewDidLoad;
- (void)setLeftNavigationButton:(long long)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) __weak UIImageView *headerViewLogo; // @synthesize headerViewLogo;
@property(nonatomic) __weak UILabel *headerViewLabel; // @synthesize headerViewLabel;
@property(nonatomic) __weak UIView *headerView; // @synthesize headerView;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView;
@property(nonatomic) __weak UISearchBar *searchBar; // @synthesize searchBar;

@end

