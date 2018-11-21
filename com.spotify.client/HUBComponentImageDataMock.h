//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBComponentImageData-Protocol.h"

@class NSDictionary, NSString, NSURL, UIImage;
@protocol HUBIcon;

@interface HUBComponentImageDataMock : NSObject <HUBComponentImageData>
{
    NSString *_identifier;
    long long _type;
    NSURL *_URL;
    UIImage *_localImage;
    id <HUBIcon> _placeholderIcon;
    NSDictionary *_customData;
}

@property(readonly, copy, nonatomic) NSDictionary *customData; // @synthesize customData=_customData;
@property(readonly, nonatomic) id <HUBIcon> placeholderIcon; // @synthesize placeholderIcon=_placeholderIcon;
@property(readonly, nonatomic) UIImage *localImage; // @synthesize localImage=_localImage;
@property(readonly, copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)serialize;
- (id)initWithCustomData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

