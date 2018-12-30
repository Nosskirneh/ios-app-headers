//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RLMObject.h"

#import "NSCopying-Protocol.h"

@class NSMutableDictionary, NSString, RLMArray;
@protocol ANGRatePlaylistItem;

@interface ANGDialog : RLMObject <NSCopying>
{
    int _dialogDisplayMode;
    NSString *_dialogIdentifier;
    NSString *_dialogID;
    NSString *_dialogTitle;
    NSString *_dialogSubtitle;
    NSString *_dialogActionTitle;
    NSString *_dialogActionDeeplink;
    NSString *_dialogActionAmplitude;
    NSString *_dialogCancelTitle;
    NSString *_dialogCancelDeeplink;
    NSString *_dialogCancelAmplitude;
    NSString *_dialogBackgroundImage;
    NSString *_dialogImageString;
    NSString *_dialogCancelButtonPosition;
    NSString *_videoAdTag;
    NSString *_dialogText1;
    NSString *_dialogText2;
    NSString *_dialogText3;
    NSString *_dialogShowAmplitudeEvent;
    NSString *_dictionaryResponseString;
    NSString *_objectData;
    NSString *_reportingApi;
    NSString *_reportingAmplitude;
    NSString *_endScreenImage;
    NSString *_endScreenText;
    NSString *_commentHint;
    RLMArray<ANGRatePlaylistItem> *_rates;
    CDUnknownBlockType _actionBlock;
    CDUnknownBlockType _cancelBlock;
    NSMutableDictionary *_additionalAnalyticsParams;
}

+ (_Bool)isSkipAlert:(id)arg1;
+ (_Bool)isRateAlert:(id)arg1;
+ (_Bool)showDialog:(id)arg1 params:(id)arg2;
+ (id)pushNotificationsDialog;
+ (id)rateDialog;
+ (id)playQueueDialogDeviceName:(id)arg1;
+ (id)twentyDownloadsDialog;
+ (id)ratePlaylistDialog;
+ (id)followedPlaylistDialog;
+ (id)likeDialog;
+ (id)validateEmailDialog;
+ (id)musicLangDialog;
+ (id)songsTitleLanguageDialog;
+ (id)skipDialog;
+ (id)skipDialogVideoAd;
+ (id)ignoredProperties;
+ (id)primaryKey;
@property(retain, nonatomic) NSMutableDictionary *additionalAnalyticsParams; // @synthesize additionalAnalyticsParams=_additionalAnalyticsParams;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(retain, nonatomic) RLMArray<ANGRatePlaylistItem> *rates; // @synthesize rates=_rates;
@property(retain, nonatomic) NSString *commentHint; // @synthesize commentHint=_commentHint;
@property(retain, nonatomic) NSString *endScreenText; // @synthesize endScreenText=_endScreenText;
@property(retain, nonatomic) NSString *endScreenImage; // @synthesize endScreenImage=_endScreenImage;
@property(retain, nonatomic) NSString *reportingAmplitude; // @synthesize reportingAmplitude=_reportingAmplitude;
@property(retain, nonatomic) NSString *reportingApi; // @synthesize reportingApi=_reportingApi;
@property(retain, nonatomic) NSString *objectData; // @synthesize objectData=_objectData;
@property(retain, nonatomic) NSString *dictionaryResponseString; // @synthesize dictionaryResponseString=_dictionaryResponseString;
@property(retain, nonatomic) NSString *dialogShowAmplitudeEvent; // @synthesize dialogShowAmplitudeEvent=_dialogShowAmplitudeEvent;
@property(retain, nonatomic) NSString *dialogText3; // @synthesize dialogText3=_dialogText3;
@property(retain, nonatomic) NSString *dialogText2; // @synthesize dialogText2=_dialogText2;
@property(retain, nonatomic) NSString *dialogText1; // @synthesize dialogText1=_dialogText1;
@property int dialogDisplayMode; // @synthesize dialogDisplayMode=_dialogDisplayMode;
@property(retain, nonatomic) NSString *videoAdTag; // @synthesize videoAdTag=_videoAdTag;
@property(retain, nonatomic) NSString *dialogCancelButtonPosition; // @synthesize dialogCancelButtonPosition=_dialogCancelButtonPosition;
@property(retain, nonatomic) NSString *dialogImageString; // @synthesize dialogImageString=_dialogImageString;
@property(retain, nonatomic) NSString *dialogBackgroundImage; // @synthesize dialogBackgroundImage=_dialogBackgroundImage;
@property(retain, nonatomic) NSString *dialogCancelAmplitude; // @synthesize dialogCancelAmplitude=_dialogCancelAmplitude;
@property(retain, nonatomic) NSString *dialogCancelDeeplink; // @synthesize dialogCancelDeeplink=_dialogCancelDeeplink;
@property(retain, nonatomic) NSString *dialogCancelTitle; // @synthesize dialogCancelTitle=_dialogCancelTitle;
@property(retain, nonatomic) NSString *dialogActionAmplitude; // @synthesize dialogActionAmplitude=_dialogActionAmplitude;
@property(retain, nonatomic) NSString *dialogActionDeeplink; // @synthesize dialogActionDeeplink=_dialogActionDeeplink;
@property(retain, nonatomic) NSString *dialogActionTitle; // @synthesize dialogActionTitle=_dialogActionTitle;
@property(retain, nonatomic) NSString *dialogSubtitle; // @synthesize dialogSubtitle=_dialogSubtitle;
@property(retain, nonatomic) NSString *dialogTitle; // @synthesize dialogTitle=_dialogTitle;
@property(retain, nonatomic) NSString *dialogID; // @synthesize dialogID=_dialogID;
@property(retain, nonatomic) NSString *dialogIdentifier; // @synthesize dialogIdentifier=_dialogIdentifier;
- (void).cxx_destruct;
- (void)markShown;
- (id)analyticsParams;
- (void)addAnalyticsParams:(id)arg1;
- (_Bool)executeCancelButton;
- (_Bool)executeActionButton;
- (void)show;
- (_Bool)isLoginAction;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)dialogCancelIsLarge;
- (_Bool)dialogCancelIsOutside;
- (id)initWithDictionary:(id)arg1 actionBlock:(CDUnknownBlockType)arg2 cancelBlock:(CDUnknownBlockType)arg3;
- (id)initWithDictionary:(id)arg1;

@end
