//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTAdPreviewToolPreview.h"

@class NSString, NSURL;

@interface SPTAdPreviewToolCreative : NSObject <SPTAdPreviewToolPreview>
{
    NSString *_name;
    long long _identifier;
    NSURL *_previewURL;
    long long _type;
}

@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSURL *previewURL; // @synthesize previewURL=_previewURL;
@property(readonly, nonatomic) long long identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithName:(id)arg1 identifier:(long long)arg2 previewURL:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

