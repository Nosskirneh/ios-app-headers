//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTTextAttachment.h"

#import "DTTextAttachmentDrawing-Protocol.h"
#import "DTTextAttachmentHTMLPersistence-Protocol.h"

@class NSString, UIImage;

@interface DTImageTextAttachment : DTTextAttachment <DTTextAttachmentDrawing, DTTextAttachmentHTMLPersistence>
{
    UIImage *_image;
}

+ (id)sharedImageCache;
- (void).cxx_destruct;
- (void)setDisplaySize:(struct CGSize)arg1;
@property(retain, nonatomic) UIImage *image;
- (id)stringByEncodingAsHTML;
- (void)drawInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2;
- (id)dataURLRepresentation;
- (void)_updateSizesFromImage:(id)arg1;
- (void)_decodeImageFromElement:(id)arg1 options:(id)arg2;
- (id)initWithImage:(id)arg1;
- (id)initWithElement:(id)arg1 options:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

