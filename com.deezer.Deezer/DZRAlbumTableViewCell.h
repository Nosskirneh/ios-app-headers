//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DZRLibraryItemTableViewCell.h"

@class DZREdgeInsetsLabel, DeezerAlbum, NSLayoutConstraint;

@interface DZRAlbumTableViewCell : DZRLibraryItemTableViewCell
{
    DeezerAlbum *_album;
    NSLayoutConstraint *_detailTopConstraint;
    NSLayoutConstraint *_titleBottomConstraint;
    DZREdgeInsetsLabel *_extraLabel;
}

@property(nonatomic) __weak DZREdgeInsetsLabel *extraLabel; // @synthesize extraLabel=_extraLabel;
@property(nonatomic) __weak NSLayoutConstraint *titleBottomConstraint; // @synthesize titleBottomConstraint=_titleBottomConstraint;
@property(nonatomic) __weak NSLayoutConstraint *detailTopConstraint; // @synthesize detailTopConstraint=_detailTopConstraint;
@property(retain, nonatomic) DeezerAlbum *album; // @synthesize album=_album;
- (void).cxx_destruct;
- (_Bool)isEnabled;
- (id)listenableItem;
- (id)libraryObject;
- (void)configureExtraLabel;
- (void)setExtraLabelEnabled:(_Bool)arg1;
- (_Bool)itemIsFavorite;
- (void)populateWithAlbum:(id)arg1 style:(unsigned long long)arg2;

@end
