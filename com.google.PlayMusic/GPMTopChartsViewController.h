//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPMTabbedViewController.h"

#import "GPMTopChartsCollectionViewControllerDelegate-Protocol.h"

@class GPMArtRequestTicket, GPMDropdown, GPMGenreRef, GPMTopChartsCollectionViewController, NSArray, NSString;

@interface GPMTopChartsViewController : GPMTabbedViewController <GPMTopChartsCollectionViewControllerDelegate>
{
    GPMGenreRef *_overallGenre;
    GPMTopChartsCollectionViewController *_topChartsCollectionVC;
    NSArray *_genres;
    GPMDropdown *_titleDropdown;
    NSString *_topChartArtURL;
    GPMArtRequestTicket *_artRequestTicket;
}

- (void).cxx_destruct;
- (id)navigationStyle;
- (void)updateTopChartsHeroImageWithImageURL:(id)arg1;
- (void)tabbedHeaderController:(id)arg1 heroImageWithCallback:(CDUnknownBlockType)arg2;
- (_Bool)shouldShowPopoverMenu;
- (void)selectGenre:(id)arg1;
- (void)showGenrePopover;
- (void)setHeaderTitle:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

@end

