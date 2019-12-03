//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIFont, UIImageView, UIView;

@interface ProRowVC : UIViewController
{
    UIImageView *appLogo;
    UIImageView *userImage;
    UIView *userImageWrap;
    _Bool _forceShowBackButton;
    UIFont *fontTitle;
    UIFont *fontSubtitle;
    UIFont *fontSubBlock;
    UIFont *fontSubCallout;
    UIFont *fontNormal;
    UIFont *fontSmall;
    UIFont *fontCTA;
}

@property(nonatomic) _Bool forceShowBackButton; // @synthesize forceShowBackButton=_forceShowBackButton;
@property(retain, nonatomic) UIFont *fontCTA; // @synthesize fontCTA;
@property(retain, nonatomic) UIFont *fontSmall; // @synthesize fontSmall;
@property(retain, nonatomic) UIFont *fontNormal; // @synthesize fontNormal;
@property(retain, nonatomic) UIFont *fontSubCallout; // @synthesize fontSubCallout;
@property(retain, nonatomic) UIFont *fontSubBlock; // @synthesize fontSubBlock;
@property(retain, nonatomic) UIFont *fontSubtitle; // @synthesize fontSubtitle;
@property(retain, nonatomic) UIFont *fontTitle; // @synthesize fontTitle;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (id)getUserImageWrap;
- (void)setUserImageBorder:(id)arg1;
- (id)getUserImage;
- (id)getLogo;
- (void)setLogoColor:(id)arg1;
- (void)resetTextStylesForModal;
- (void)initTextStyles;
- (void)viewDidLoad;

@end
