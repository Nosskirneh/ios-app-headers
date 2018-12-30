//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, NSURL;

@interface Question : NSObject
{
    _Bool _allowsCloseButton;
    _Bool _isSponsored;
    _Bool _answerEvent;
    _Bool _showEvent;
    _Bool _imagePadding;
    int _answerType;
    NSString *_questionSuperTitle;
    NSString *_questionSuperTitleColor;
    NSString *_questionTitle;
    NSString *_questionTitleColor;
    NSString *_questionBackgroundColor;
    NSString *_questionBottomImage;
    NSString *_questionTopImage;
    NSString *_questionSubtitle;
    NSString *_questionSubtitleColor;
    NSString *_color1;
    NSString *_color2;
    NSString *_headerImage;
    NSString *_questionText;
    NSString *_questionTextColor;
    NSString *_questionImage;
    NSURL *_questionBackgroundImage;
    NSArray *_answers;
    NSString *_questionId;
    long long _expiryTime;
    NSDictionary *_objectData;
    NSString *_reportingApi;
    NSString *_reportingAmplitude;
    NSString *_closeUrl;
}

+ (unsigned long long)numberOfLinesSubtitle;
+ (unsigned long long)numberOfLinesTitle;
+ (id)subtitleFont;
+ (id)titleFont;
+ (id)questionFont;
+ (double)heightForQuestion:(id)arg1;
+ (double)questionLabelWidthWithImage:(_Bool)arg1 withAvailableWidth:(double)arg2 question:(id)arg3;
+ (double)heightForQuestionLabelWithQuestion:(id)arg1 andWidth:(double)arg2;
@property _Bool imagePadding; // @synthesize imagePadding=_imagePadding;
@property _Bool showEvent; // @synthesize showEvent=_showEvent;
@property _Bool answerEvent; // @synthesize answerEvent=_answerEvent;
@property(copy) NSString *closeUrl; // @synthesize closeUrl=_closeUrl;
@property(copy) NSString *reportingAmplitude; // @synthesize reportingAmplitude=_reportingAmplitude;
@property(copy) NSString *reportingApi; // @synthesize reportingApi=_reportingApi;
@property(copy) NSDictionary *objectData; // @synthesize objectData=_objectData;
@property _Bool isSponsored; // @synthesize isSponsored=_isSponsored;
@property(nonatomic) int answerType; // @synthesize answerType=_answerType;
@property long long expiryTime; // @synthesize expiryTime=_expiryTime;
@property(copy) NSString *questionId; // @synthesize questionId=_questionId;
@property _Bool allowsCloseButton; // @synthesize allowsCloseButton=_allowsCloseButton;
@property(retain, nonatomic) NSArray *answers; // @synthesize answers=_answers;
@property(copy) NSURL *questionBackgroundImage; // @synthesize questionBackgroundImage=_questionBackgroundImage;
@property(copy) NSString *questionImage; // @synthesize questionImage=_questionImage;
@property(copy) NSString *questionTextColor; // @synthesize questionTextColor=_questionTextColor;
@property(copy) NSString *questionText; // @synthesize questionText=_questionText;
@property(copy, nonatomic) NSString *headerImage; // @synthesize headerImage=_headerImage;
@property(copy, nonatomic) NSString *color2; // @synthesize color2=_color2;
@property(copy, nonatomic) NSString *color1; // @synthesize color1=_color1;
@property(copy, nonatomic) NSString *questionSubtitleColor; // @synthesize questionSubtitleColor=_questionSubtitleColor;
@property(copy, nonatomic) NSString *questionSubtitle; // @synthesize questionSubtitle=_questionSubtitle;
@property(copy, nonatomic) NSString *questionTopImage; // @synthesize questionTopImage=_questionTopImage;
@property(copy) NSString *questionBottomImage; // @synthesize questionBottomImage=_questionBottomImage;
@property(copy) NSString *questionBackgroundColor; // @synthesize questionBackgroundColor=_questionBackgroundColor;
@property(copy) NSString *questionTitleColor; // @synthesize questionTitleColor=_questionTitleColor;
@property(copy) NSString *questionTitle; // @synthesize questionTitle=_questionTitle;
@property(copy) NSString *questionSuperTitleColor; // @synthesize questionSuperTitleColor=_questionSuperTitleColor;
@property(copy) NSString *questionSuperTitle; // @synthesize questionSuperTitle=_questionSuperTitle;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (double)availableMargin;

@end

