//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface SKTUIInAppContactDisplayOptions : NSObject
{
    UIImage *_icon;
    NSString *_contactMethodTypeLabelText;
    NSString *_sendActionLabelText;
    NSString *_gridContactMethodTypeLabelText;
}

@property(retain, nonatomic) NSString *gridContactMethodTypeLabelText; // @synthesize gridContactMethodTypeLabelText=_gridContactMethodTypeLabelText;
@property(readonly, nonatomic) NSString *sendActionLabelText; // @synthesize sendActionLabelText=_sendActionLabelText;
@property(readonly, nonatomic) NSString *contactMethodTypeLabelText; // @synthesize contactMethodTypeLabelText=_contactMethodTypeLabelText;
@property(readonly, nonatomic) UIImage *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (id)initWithContactInfoTypeLabelText:(id)arg1 sendActionLabelText:(id)arg2 icon:(id)arg3;

@end

