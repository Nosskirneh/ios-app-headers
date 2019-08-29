//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMJSONModel.h"

@class NSNumber, NSString;

@interface IMAdsConfigWebviewModeModel : IMJSONModel
{
    NSString *_webviewBackground;
    NSNumber *_webviewMode;
}

@property(retain, nonatomic) NSNumber *webviewMode; // @synthesize webviewMode=_webviewMode;
@property(retain, nonatomic) NSString *webviewBackground; // @synthesize webviewBackground=_webviewBackground;
- (void).cxx_destruct;
- (_Bool)validate:(id *)arg1;
- (id)initWithWebviewMode:(id)arg1 andBackGroundColor:(id)arg2;
- (id)init;

@end

