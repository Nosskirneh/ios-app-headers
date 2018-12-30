//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SettingsSuperViewController.h"

@class NSArray, NSAttributedString, NSString;

@interface BlockedUsersSettingsViewController : SettingsSuperViewController
{
    NSString *_customTitle;
    NSArray *_blockedUsersList;
    NSAttributedString *_errorText;
}

@property(retain, nonatomic) NSAttributedString *errorText; // @synthesize errorText=_errorText;
@property(retain, nonatomic) NSArray *blockedUsersList; // @synthesize blockedUsersList=_blockedUsersList;
@property(retain, nonatomic) NSString *customTitle; // @synthesize customTitle=_customTitle;
- (void).cxx_destruct;
- (id)generateSections;
- (id)errorTextView;
- (void)adjustInsetsForMiniPlayer:(id)arg1;
- (void)viewDidLoad;

@end

