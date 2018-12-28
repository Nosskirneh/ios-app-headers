//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MusicCollectionViewController.h"

@class Genre, ItemList;

@interface AlbumsGenreCollectionViewController : MusicCollectionViewController
{
    Genre *_genre;
    ItemList *_albumsList;
}

- (void).cxx_destruct;
- (void)card:(id)arg1 clickedAtIndexPath:(id)arg2;
- (void)loadItemsWithLoadingHandler:(CDUnknownBlockType)arg1;
- (_Bool)isContentChangeAnimationSupported;
- (id)cardDataSourceForItem:(id)arg1 atIndexPath:(id)arg2;
- (id)reusableIdentifierForItem:(id)arg1 atIndexPath:(id)arg2;
- (void)registerCollectionIdentifiers;
- (id)musicItemProvider;
- (void)viewDidLoad;
- (id)initWithGenre:(id)arg1;

@end

