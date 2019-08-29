//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "TTTAttributedLabelDelegate-Protocol.h"

@class FollowButton, GenericButton, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, SaavnVC_n, TTTAttributedLabel, UIButton, UIImageView, UILabel, UIScrollView, UIView;

@interface InboxCard : UITableViewCell <TTTAttributedLabelDelegate>
{
    UIView *senderBevel;
    UIView *senderBorder;
    UIView *originalSenderBevel;
    UIView *entityBevel;
    UIView *tagsFade;
    _Bool isTag;
    _Bool isReply;
    _Bool isSent;
    _Bool isGenSimple;
    _Bool isGenImage;
    _Bool isShowOrChannel;
    NSDictionary *linkStyles;
    NSDictionary *activeLinkStyles;
    SaavnVC_n *_parentVC;
    UIView *_card;
    UIImageView *_originalSender;
    UIButton *_senderBtn;
    UIView *_unreadBadge;
    TTTAttributedLabel *_titleMessage;
    UILabel *_timestamp;
    UIView *_bodyView;
    UIScrollView *_tagsView;
    TTTAttributedLabel *_bodyMessage;
    UIImageView *_tag1;
    UIImageView *_tag2;
    UIImageView *_tag3;
    UIImageView *_tag4;
    UIImageView *_tag5;
    UIButton *_tagBtn1;
    UIButton *_tagBtn2;
    UIButton *_tagBtn3;
    UIButton *_tagBtn4;
    UIButton *_tagBtn5;
    NSMutableDictionary *_entityData;
    UIButton *_entityView;
    UIImageView *_entityImage;
    UILabel *_entityTitle;
    UILabel *_entityMeta;
    NSMutableDictionary *_replyData;
    NSMutableArray *_tagImages;
    NSMutableArray *_tagBtns;
    UIButton *_replyButton;
    FollowButton *_followButton;
    UIButton *_coverButton;
    GenericButton *_genericButton;
    GenericButton *_entityGenericButton;
    UILabel *_genericTitle;
    UILabel *_genericMessage;
}

@property(retain, nonatomic) UILabel *genericMessage; // @synthesize genericMessage=_genericMessage;
@property(retain, nonatomic) UILabel *genericTitle; // @synthesize genericTitle=_genericTitle;
@property(retain, nonatomic) GenericButton *entityGenericButton; // @synthesize entityGenericButton=_entityGenericButton;
@property(retain, nonatomic) GenericButton *genericButton; // @synthesize genericButton=_genericButton;
@property(retain, nonatomic) UIButton *coverButton; // @synthesize coverButton=_coverButton;
@property(retain, nonatomic) FollowButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) UIButton *replyButton; // @synthesize replyButton=_replyButton;
@property(retain, nonatomic) NSMutableArray *tagBtns; // @synthesize tagBtns=_tagBtns;
@property(retain, nonatomic) NSMutableArray *tagImages; // @synthesize tagImages=_tagImages;
@property(retain, nonatomic) NSMutableDictionary *replyData; // @synthesize replyData=_replyData;
@property(retain, nonatomic) UILabel *entityMeta; // @synthesize entityMeta=_entityMeta;
@property(retain, nonatomic) UILabel *entityTitle; // @synthesize entityTitle=_entityTitle;
@property(retain, nonatomic) UIImageView *entityImage; // @synthesize entityImage=_entityImage;
@property(retain, nonatomic) UIButton *entityView; // @synthesize entityView=_entityView;
@property(retain, nonatomic) NSMutableDictionary *entityData; // @synthesize entityData=_entityData;
@property(retain, nonatomic) UIButton *tagBtn5; // @synthesize tagBtn5=_tagBtn5;
@property(retain, nonatomic) UIButton *tagBtn4; // @synthesize tagBtn4=_tagBtn4;
@property(retain, nonatomic) UIButton *tagBtn3; // @synthesize tagBtn3=_tagBtn3;
@property(retain, nonatomic) UIButton *tagBtn2; // @synthesize tagBtn2=_tagBtn2;
@property(retain, nonatomic) UIButton *tagBtn1; // @synthesize tagBtn1=_tagBtn1;
@property(retain, nonatomic) UIImageView *tag5; // @synthesize tag5=_tag5;
@property(retain, nonatomic) UIImageView *tag4; // @synthesize tag4=_tag4;
@property(retain, nonatomic) UIImageView *tag3; // @synthesize tag3=_tag3;
@property(retain, nonatomic) UIImageView *tag2; // @synthesize tag2=_tag2;
@property(retain, nonatomic) UIImageView *tag1; // @synthesize tag1=_tag1;
@property(retain, nonatomic) TTTAttributedLabel *bodyMessage; // @synthesize bodyMessage=_bodyMessage;
@property(retain, nonatomic) UIScrollView *tagsView; // @synthesize tagsView=_tagsView;
@property(retain, nonatomic) UIView *bodyView; // @synthesize bodyView=_bodyView;
@property(retain, nonatomic) UILabel *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) TTTAttributedLabel *titleMessage; // @synthesize titleMessage=_titleMessage;
@property(retain, nonatomic) UIView *unreadBadge; // @synthesize unreadBadge=_unreadBadge;
@property(retain, nonatomic) UIButton *senderBtn; // @synthesize senderBtn=_senderBtn;
@property(retain, nonatomic) UIImageView *originalSender; // @synthesize originalSender=_originalSender;
@property(retain, nonatomic) UIView *card; // @synthesize card=_card;
@property __weak SaavnVC_n *parentVC; // @synthesize parentVC=_parentVC;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)loadGenericNotif;
- (void)replyToTag;
- (void)loadEntity;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)colorReset;
- (void)setCustomColors;
- (void)setBadgeColor:(id)arg1;
- (void)setCustomData:(id)arg1;
- (void)showasShowOrChannel;
- (void)showasGenericImage;
- (void)showasGenericSimple;
- (void)showAsReply;
- (void)setReplyCount:(unsigned long long)arg1;
- (void)tagCell;
- (void)showFollow:(_Bool)arg1;
- (void)showEntity;
- (void)showTags:(unsigned long long)arg1;
- (void)showBody;
- (void)showBadge;
- (void)setLinkStyles;
- (void)updateUIMode;
- (void)initCell;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

