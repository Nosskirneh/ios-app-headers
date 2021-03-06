//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DetailVC.h"

@class NSArray, NSString;

@interface ArtistVC : DetailVC
{
    unsigned long long followerCount;
    _Bool hasBio;
    _Bool hasRadio;
    NSString *_artistID;
    NSString *_artistName;
    NSString *_artistImage;
    NSArray *_librarySongs;
}

@property(retain, nonatomic) NSArray *librarySongs; // @synthesize librarySongs=_librarySongs;
@property(retain) NSString *artistImage; // @synthesize artistImage=_artistImage;
@property(retain) NSString *artistName; // @synthesize artistName=_artistName;
@property(retain) NSString *artistID; // @synthesize artistID=_artistID;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)loadFullProfile;
- (void)loadArtist:(id)arg1 withName:(id)arg2;
- (void)moreSongs;
- (void)moreAlbums;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)followUpdate:(id)arg1;
- (void)libraryUpdate:(id)arg1;
- (id)getClientModule:(id)arg1 withModule:(id)arg2;
- (id)getArtistWithoutModule;
- (void)addViewProfileRow;
- (void)initHeaderActions;
- (void)initData;
- (void)initModules;
- (void)initLibraryData;
- (void)parseProfileData:(id)arg1;
- (void)fetchData;
- (void)viewDidLoad;

@end

