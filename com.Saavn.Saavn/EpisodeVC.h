//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DetailVC.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSDictionary, NSString, SaavnVC_n;

@interface EpisodeVC : DetailVC <UITableViewDataSource, UITableViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate>
{
    _Bool shownViaShowView;
    _Bool isFollowed;
    NSString *description;
    NSString *trackingIdStr;
    float keyFieldWidth;
    float descriptionCellHeight;
    float descriptionCollapsedHeight;
    NSDictionary *stringFormat;
    _Bool isPro;
    int _episodeNumber;
    NSString *episodeId;
    SaavnVC_n *parentVC;
    NSString *_episodeName;
    NSString *_episodeImage;
    NSString *_parentIdStr;
    NSString *_referralType;
}

@property(nonatomic) int episodeNumber; // @synthesize episodeNumber=_episodeNumber;
@property(retain, nonatomic) NSString *referralType; // @synthesize referralType=_referralType;
@property(retain, nonatomic) NSString *parentIdStr; // @synthesize parentIdStr=_parentIdStr;
@property(retain, nonatomic) NSString *episodeImage; // @synthesize episodeImage=_episodeImage;
@property(retain, nonatomic) NSString *episodeName; // @synthesize episodeName=_episodeName;
@property(retain, nonatomic) SaavnVC_n *parentVC; // @synthesize parentVC;
@property(retain, nonatomic) NSString *episodeId; // @synthesize episodeId;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)followUpdate:(id)arg1;
- (void)updateProMode;
- (id)getClientModule:(id)arg1 withModule:(id)arg2;
- (id)getTrackingIdStr;
- (id)getEpisode;
- (id)getFallbackEpisodeModules;
- (void)setTrackingIdPrefix;
- (void)setEpisode:(id)arg1;
- (void)initHeaderActions;
- (void)initData;
- (void)initModules;
- (void)parseData:(id)arg1;
- (void)fetchData;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
