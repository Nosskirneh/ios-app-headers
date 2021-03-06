//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class NSLayoutConstraint, UIImageView, UILabel, UITableViewCell, UIView;

@interface JDrawerMenuViewController : UITableViewController
{
    _Bool m_bHasPodcastMenu;
    _Bool m_bHasNetworkMenu;
    int m_nCurTab;
    struct MenuCellInfo m_MenuCellInfos[10];
    UIView *_headerMenuView;
    UILabel *_headerMenuLabel;
    UIView *_headerMenuSeparator;
    UIView *_headerMenuBackground;
    UILabel *_artistsMenuLabel;
    UILabel *_albumsMenuLabel;
    UILabel *_songsMenuLabel;
    UILabel *_folderMenuLabel;
    UILabel *_playlistsMenuLabel;
    UILabel *_preferencesMenuLabel;
    UILabel *_albumArtistsMenuLabel;
    UILabel *_compilationsMenuLabel;
    UILabel *_genreMenuLabel;
    UILabel *_podcastsMenuLabel;
    UILabel *_networkMenuLabel;
    UILabel *_purchaseMenuLabel;
    UIView *_separator;
    UIView *_separator2;
    UITableViewCell *_artistsCell;
    UITableViewCell *_albumsCell;
    UITableViewCell *_songsCell;
    UITableViewCell *_folderCell;
    UITableViewCell *_playlistsCell;
    UITableViewCell *_preferencesCell;
    UITableViewCell *_albumArtistsCell;
    UITableViewCell *_compilationsCell;
    UITableViewCell *_genreCell;
    UITableViewCell *_podcastsCell;
    UITableViewCell *_networkCell;
    UITableViewCell *_purchaseCell;
    UIImageView *_artistsMenuImageView;
    UIImageView *_albumsMenuImageView;
    UIImageView *_songsMenuImageView;
    UIImageView *_folderMenuImageView;
    UIImageView *_playlistsMenuImageView;
    UIImageView *_albumArtistsMenuImageView;
    UIImageView *_compilationsMenuImageView;
    UIImageView *_genreMenuImageView;
    UIImageView *_podcastsMenuImageView;
    UIImageView *_networkMenuImageView;
    UIImageView *_preferenceMenuImageView;
    NSLayoutConstraint *_headerIconWidthConstraint;
    NSLayoutConstraint *_headerIconHeightConstraint;
    NSLayoutConstraint *_headerIconLeftConstraint;
    NSLayoutConstraint *_headerIconRightConstraint;
    NSLayoutConstraint *_headerIconTopConstraint;
}

@property(nonatomic) __weak NSLayoutConstraint *headerIconTopConstraint; // @synthesize headerIconTopConstraint=_headerIconTopConstraint;
@property(nonatomic) __weak NSLayoutConstraint *headerIconRightConstraint; // @synthesize headerIconRightConstraint=_headerIconRightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *headerIconLeftConstraint; // @synthesize headerIconLeftConstraint=_headerIconLeftConstraint;
@property(nonatomic) __weak NSLayoutConstraint *headerIconHeightConstraint; // @synthesize headerIconHeightConstraint=_headerIconHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *headerIconWidthConstraint; // @synthesize headerIconWidthConstraint=_headerIconWidthConstraint;
@property(nonatomic) __weak UIImageView *preferenceMenuImageView; // @synthesize preferenceMenuImageView=_preferenceMenuImageView;
@property(nonatomic) __weak UIImageView *networkMenuImageView; // @synthesize networkMenuImageView=_networkMenuImageView;
@property(nonatomic) __weak UIImageView *podcastsMenuImageView; // @synthesize podcastsMenuImageView=_podcastsMenuImageView;
@property(nonatomic) __weak UIImageView *genreMenuImageView; // @synthesize genreMenuImageView=_genreMenuImageView;
@property(nonatomic) __weak UIImageView *compilationsMenuImageView; // @synthesize compilationsMenuImageView=_compilationsMenuImageView;
@property(nonatomic) __weak UIImageView *albumArtistsMenuImageView; // @synthesize albumArtistsMenuImageView=_albumArtistsMenuImageView;
@property(nonatomic) __weak UIImageView *playlistsMenuImageView; // @synthesize playlistsMenuImageView=_playlistsMenuImageView;
@property(nonatomic) __weak UIImageView *folderMenuImageView; // @synthesize folderMenuImageView=_folderMenuImageView;
@property(nonatomic) __weak UIImageView *songsMenuImageView; // @synthesize songsMenuImageView=_songsMenuImageView;
@property(nonatomic) __weak UIImageView *albumsMenuImageView; // @synthesize albumsMenuImageView=_albumsMenuImageView;
@property(nonatomic) __weak UIImageView *artistsMenuImageView; // @synthesize artistsMenuImageView=_artistsMenuImageView;
@property(nonatomic) __weak UITableViewCell *purchaseCell; // @synthesize purchaseCell=_purchaseCell;
@property(nonatomic) __weak UITableViewCell *networkCell; // @synthesize networkCell=_networkCell;
@property(nonatomic) __weak UITableViewCell *podcastsCell; // @synthesize podcastsCell=_podcastsCell;
@property(nonatomic) __weak UITableViewCell *genreCell; // @synthesize genreCell=_genreCell;
@property(nonatomic) __weak UITableViewCell *compilationsCell; // @synthesize compilationsCell=_compilationsCell;
@property(nonatomic) __weak UITableViewCell *albumArtistsCell; // @synthesize albumArtistsCell=_albumArtistsCell;
@property(nonatomic) __weak UITableViewCell *preferencesCell; // @synthesize preferencesCell=_preferencesCell;
@property(nonatomic) __weak UITableViewCell *playlistsCell; // @synthesize playlistsCell=_playlistsCell;
@property(nonatomic) __weak UITableViewCell *folderCell; // @synthesize folderCell=_folderCell;
@property(nonatomic) __weak UITableViewCell *songsCell; // @synthesize songsCell=_songsCell;
@property(nonatomic) __weak UITableViewCell *albumsCell; // @synthesize albumsCell=_albumsCell;
@property(nonatomic) __weak UITableViewCell *artistsCell; // @synthesize artistsCell=_artistsCell;
@property(nonatomic) __weak UIView *separator2; // @synthesize separator2=_separator2;
@property(nonatomic) __weak UIView *separator; // @synthesize separator=_separator;
@property(nonatomic) __weak UILabel *purchaseMenuLabel; // @synthesize purchaseMenuLabel=_purchaseMenuLabel;
@property(nonatomic) __weak UILabel *networkMenuLabel; // @synthesize networkMenuLabel=_networkMenuLabel;
@property(nonatomic) __weak UILabel *podcastsMenuLabel; // @synthesize podcastsMenuLabel=_podcastsMenuLabel;
@property(nonatomic) __weak UILabel *genreMenuLabel; // @synthesize genreMenuLabel=_genreMenuLabel;
@property(nonatomic) __weak UILabel *compilationsMenuLabel; // @synthesize compilationsMenuLabel=_compilationsMenuLabel;
@property(nonatomic) __weak UILabel *albumArtistsMenuLabel; // @synthesize albumArtistsMenuLabel=_albumArtistsMenuLabel;
@property(nonatomic) __weak UILabel *preferencesMenuLabel; // @synthesize preferencesMenuLabel=_preferencesMenuLabel;
@property(nonatomic) __weak UILabel *playlistsMenuLabel; // @synthesize playlistsMenuLabel=_playlistsMenuLabel;
@property(nonatomic) __weak UILabel *folderMenuLabel; // @synthesize folderMenuLabel=_folderMenuLabel;
@property(nonatomic) __weak UILabel *songsMenuLabel; // @synthesize songsMenuLabel=_songsMenuLabel;
@property(nonatomic) __weak UILabel *albumsMenuLabel; // @synthesize albumsMenuLabel=_albumsMenuLabel;
@property(nonatomic) __weak UILabel *artistsMenuLabel; // @synthesize artistsMenuLabel=_artistsMenuLabel;
@property(nonatomic) __weak UIView *headerMenuBackground; // @synthesize headerMenuBackground=_headerMenuBackground;
@property(nonatomic) __weak UIView *headerMenuSeparator; // @synthesize headerMenuSeparator=_headerMenuSeparator;
@property(nonatomic) __weak UILabel *headerMenuLabel; // @synthesize headerMenuLabel=_headerMenuLabel;
@property(nonatomic) __weak UIView *headerMenuView; // @synthesize headerMenuView=_headerMenuView;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)applyTheme;
- (id)getMenuBackgroundColor;
- (void)onJAccentColorChanged:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)setCurrentTab:(int)arg1;
- (void)setTabBackgroundColor:(int)arg1 flag:(_Bool)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

