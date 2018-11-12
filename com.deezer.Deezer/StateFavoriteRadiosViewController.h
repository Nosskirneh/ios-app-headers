//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BMWStateProtocol-Protocol.h"
#import "IDTableDelegate-Protocol.h"
#import "IDViewDelegate-Protocol.h"

@class DZOFetchCallback, NSArray, NSError, NSMutableArray, NSMutableDictionary, NSString, StateFavoriteRadiosView;
@protocol StateFavoriteRadiosViewControllerDelegate;

@interface StateFavoriteRadiosViewController : NSObject <IDViewDelegate, IDTableDelegate, BMWStateProtocol>
{
    id <StateFavoriteRadiosViewControllerDelegate> _delegate;
    StateFavoriteRadiosView *_view;
    NSMutableDictionary *_coversDownloadIds;
    NSMutableArray *_rowIndexesWithDisplayedCovers;
    DZOFetchCallback *_deezerFetchCallback;
    DZOFetchCallback *_artistsFetchCallback;
    NSArray *_deezerRadios;
    NSArray *_artistsWithSmartRadios;
    NSError *_radiosError;
    NSError *_artistsError;
}

@property(retain, nonatomic) NSError *artistsError; // @synthesize artistsError=_artistsError;
@property(retain, nonatomic) NSError *radiosError; // @synthesize radiosError=_radiosError;
@property(retain, nonatomic) NSArray *artistsWithSmartRadios; // @synthesize artistsWithSmartRadios=_artistsWithSmartRadios;
@property(retain, nonatomic) NSArray *deezerRadios; // @synthesize deezerRadios=_deezerRadios;
@property(retain) DZOFetchCallback *artistsFetchCallback; // @synthesize artistsFetchCallback=_artistsFetchCallback;
@property(retain) DZOFetchCallback *deezerFetchCallback; // @synthesize deezerFetchCallback=_deezerFetchCallback;
@property(retain, nonatomic) NSMutableArray *rowIndexesWithDisplayedCovers; // @synthesize rowIndexesWithDisplayedCovers=_rowIndexesWithDisplayedCovers;
@property(retain, nonatomic) NSMutableDictionary *coversDownloadIds; // @synthesize coversDownloadIds=_coversDownloadIds;
@property(retain, nonatomic) StateFavoriteRadiosView *view; // @synthesize view=_view;
@property(nonatomic) id <StateFavoriteRadiosViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)stateCanLocalize;
- (void)stateCanDispose;
- (void)table:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)displayRadios;
- (void)reloadData;
- (void)didReceiveArtistRadios:(id)arg1 error:(id)arg2;
- (void)didReceiveDeezerRadios:(id)arg1 error:(id)arg2;
- (void)didFetchSomeRadios;
- (void)viewDidDisappear:(id)arg1;
- (void)viewDidAppear:(id)arg1;
- (void)dealloc;
- (id)initWithView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
