//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPMQuizCollectionViewController.h"

@class ItemList, NSMutableArray;

@interface GPMQuizGenresCollectionViewController : GPMQuizCollectionViewController
{
    ItemList *_genresList;
    NSMutableArray *_selectedGenres;
    double _sectionInsetBottom;
}

@property(nonatomic) double sectionInsetBottom; // @synthesize sectionInsetBottom=_sectionInsetBottom;
@property(retain, nonatomic) NSMutableArray *selectedGenres; // @synthesize selectedGenres=_selectedGenres;
- (void).cxx_destruct;
- (void)artRequestforIndexPath:(id)arg1 size:(struct CGSize)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (double)heightForItemAtIndexPath:(id)arg1 withWidth:(double)arg2;
- (void)loadItemsWithLoadingHandler:(CDUnknownBlockType)arg1;
- (id)titleForSection:(unsigned long long)arg1;
- (void)configureCell:(id)arg1 atIndexPath:(id)arg2;
- (id)cardDataSourceForItem:(id)arg1 atIndexPath:(id)arg2;
- (id)reusableIdentifierForItem:(id)arg1 atIndexPath:(id)arg2;
- (void)registerCollectionIdentifiers;
- (void)card:(id)arg1 clickedAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (id)musicItemProvider;
- (void)viewDidLoad;

@end
