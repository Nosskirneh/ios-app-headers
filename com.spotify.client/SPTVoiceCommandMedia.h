//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface SPTVoiceCommandMedia : NSObject
{
    NSURL *_imageURI;
    NSString *_imagePlaceholder;
}

@property(readonly, nonatomic) NSString *imagePlaceholder; // @synthesize imagePlaceholder=_imagePlaceholder;
@property(readonly, nonatomic) NSURL *imageURI; // @synthesize imageURI=_imageURI;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithURI:(id)arg1 placeholder:(id)arg2;

@end

