//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIImage;
@protocol _TtP6Deezer12Illustration_;

@interface _TtC6Deezer24ContentMastheadViewModel : NSObject
{
    // Error parsing type: , name: title
    // Error parsing type: , name: subtitle
    // Error parsing type: , name: subtitleCallback
    // Error parsing type: , name: subtitleImage
    // Error parsing type: , name: illustration
    // Error parsing type: , name: details
    // Error parsing type: , name: square
    // Error parsing type: , name: badgeText
    // Error parsing type: , name: badgeStyle
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *badgeText; // @synthesize badgeText;
@property(nonatomic, readonly) _Bool square; // @synthesize square;
@property(nonatomic, readonly) NSArray *details; // @synthesize details;
@property(nonatomic, readonly) id <_TtP6Deezer12Illustration_> illustration; // @synthesize illustration;
@property(nonatomic, readonly) UIImage *subtitleImage; // @synthesize subtitleImage;
@property(nonatomic, readonly) CDUnknownBlockType subtitleCallback; // @synthesize subtitleCallback;
@property(nonatomic, readonly) NSString *subtitle; // @synthesize subtitle;
@property(nonatomic, readonly) NSString *title; // @synthesize title;

@end

