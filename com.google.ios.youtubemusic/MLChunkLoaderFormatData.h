//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface MLChunkLoaderFormatData : NSObject
{
    NSURL *_redirectURL;
    NSURL *_fallbackURL;
}

@property(retain, nonatomic) NSURL *fallbackURL; // @synthesize fallbackURL=_fallbackURL;
@property(retain, nonatomic) NSURL *redirectURL; // @synthesize redirectURL=_redirectURL;
- (void).cxx_destruct;

@end

