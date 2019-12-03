//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DetailVC.h"

@class NSMutableArray, NSString;

@interface UserProfileVC : DetailVC
{
    NSMutableArray *topPlaylists;
    NSMutableArray *recentSongs;
    unsigned long long followerCount;
    unsigned long long followingCount;
    _Bool isSelf;
    _Bool hasSongs;
    NSString *_userID;
    NSString *_userName;
    NSString *_userImage;
}

@property(retain) NSString *userImage; // @synthesize userImage=_userImage;
@property(retain) NSString *userName; // @synthesize userName=_userName;
@property(retain) NSString *userID; // @synthesize userID=_userID;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)loadFollowing;
- (void)loadFollowers;
- (void)morePlaylists;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)followUpdate:(id)arg1;
- (id)getClientModule:(id)arg1 withModule:(id)arg2;
- (id)getFallbackProfileModules;
- (void)initHeaderActions;
- (void)initData;
- (void)initModules;
- (void)parseProfileData:(id)arg1;
- (void)fetchData;
- (void)viewDidLoad;

@end
