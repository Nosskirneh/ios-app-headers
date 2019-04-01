//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UITableViewDelegate-Protocol.h"

@class NSString, UIButton, UIImageView, UILabel, UITableView, UIView;

@interface VOXAlbumScrollAnimator : NSObject <UITableViewDelegate>
{
    _Bool _isArtistViewMode;
    UITableView *_tableView;
    UIView *_coverView;
    UIView *_coverTintView;
    UIImageView *_blurredCoverImageView;
    UILabel *_coverArtistLabel;
    UILabel *_coverCollectionTitleLabel;
    UILabel *_coverCollectionTitleSmallLabel;
    UIButton *_playAlbumButton;
    double _coverHeight;
    double _originalCollectionTitleYPossition;
}

+ (id)animatorWithTableView:(id)arg1 coverView:(id)arg2 coverArtistLabel:(id)arg3 coverCollectionTitleLabel:(id)arg4 coverCollectionTitleSmallLabel:(id)arg5 blurredCoverImageView:(id)arg6 playAlbumButton:(id)arg7 coverHeight:(double)arg8 artistViewMode:(_Bool)arg9 tintView:(id)arg10;
@property(nonatomic) double originalCollectionTitleYPossition; // @synthesize originalCollectionTitleYPossition=_originalCollectionTitleYPossition;
@property(nonatomic) _Bool isArtistViewMode; // @synthesize isArtistViewMode=_isArtistViewMode;
@property(nonatomic) double coverHeight; // @synthesize coverHeight=_coverHeight;
@property(nonatomic) __weak UIButton *playAlbumButton; // @synthesize playAlbumButton=_playAlbumButton;
@property(nonatomic) __weak UILabel *coverCollectionTitleSmallLabel; // @synthesize coverCollectionTitleSmallLabel=_coverCollectionTitleSmallLabel;
@property(nonatomic) __weak UILabel *coverCollectionTitleLabel; // @synthesize coverCollectionTitleLabel=_coverCollectionTitleLabel;
@property(nonatomic) __weak UILabel *coverArtistLabel; // @synthesize coverArtistLabel=_coverArtistLabel;
@property(nonatomic) __weak UIImageView *blurredCoverImageView; // @synthesize blurredCoverImageView=_blurredCoverImageView;
@property(nonatomic) __weak UIView *coverTintView; // @synthesize coverTintView=_coverTintView;
@property(nonatomic) __weak UIView *coverView; // @synthesize coverView=_coverView;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setup;
- (void)dealloc;
- (id)initWithTableView:(id)arg1 coverView:(id)arg2 coverArtistLabel:(id)arg3 coverCollectionTitleLabel:(id)arg4 coverCollectionTitleSmallLabel:(id)arg5 blurredCoverImageView:(id)arg6 playAlbumButton:(id)arg7 coverHeight:(double)arg8 rtistViewMode:(_Bool)arg9 tintView:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

