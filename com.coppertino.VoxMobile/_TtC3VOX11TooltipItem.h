//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSAttributedString, NSString, UIImage;

@interface _TtC3VOX11TooltipItem : NSObject
{
    // Error parsing type: , name: title
    // Error parsing type: , name: attributedText
    // Error parsing type: , name: image
    // Error parsing type: , name: linkHandler
}

+ (id)buildAttributedStringWithHtmlString:(id)arg1;
+ (id)boldTextAttributes;
+ (id)titleTextAttributes;
+ (id)textAttributes;
- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (id)initWithAttributedText:(id)arg1;
@property(nonatomic, copy) CDUnknownBlockType linkHandler; // @synthesize linkHandler;
@property(nonatomic, retain) UIImage *image; // @synthesize image;
@property(nonatomic, retain) NSAttributedString *attributedText; // @synthesize attributedText;
@property(nonatomic, copy) NSString *title; // @synthesize title;

@end

