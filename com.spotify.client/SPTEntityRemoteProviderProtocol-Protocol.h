//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTEntityRemoteProviderProtocol <NSObject>
- (shared_ptr_6008c08c)lookupTracksWithLinks:(const span_60459498 *)arg1 callback:(const struct function<void (const std::__1::error_code &, spotify::tl::span<const spotify::uri::SpotifyLink>, spotify::tl::span<std::__1::shared_ptr<const spotify::metadata::TrackInfo>>)> *)arg2;
- (shared_ptr_6008c08c)lookupAlbumsWithLinks:(const span_60459498 *)arg1 callback:(const struct function<void (const std::__1::error_code &, spotify::tl::span<const spotify::uri::SpotifyLink>, spotify::tl::span<std::__1::shared_ptr<const spotify::metadata::AlbumMetadata>>)> *)arg2;
- (shared_ptr_6008c08c)lookupArtistsWithLinks:(const span_60459498 *)arg1 callback:(const struct function<void (const std::__1::error_code &, spotify::tl::span<const spotify::uri::SpotifyLink>, spotify::tl::span<std::__1::shared_ptr<const spotify::metadata::ArtistMetadata>>)> *)arg2;
- (shared_ptr_6008c08c)lookupTrackWithLink:(const struct SpotifyLink *)arg1 callback:(const struct function<void (const std::__1::error_code &, const spotify::uri::SpotifyLink &, const std::__1::shared_ptr<const spotify::metadata::TrackInfo>&)> *)arg2;
- (shared_ptr_6008c08c)lookupAlbumWithLink:(const struct SpotifyLink *)arg1 callback:(const struct function<void (const std::__1::error_code &, const spotify::uri::SpotifyLink &, const std::__1::shared_ptr<const spotify::metadata::AlbumMetadata>&)> *)arg2;
- (shared_ptr_6008c08c)lookupArtistWithLink:(const struct SpotifyLink *)arg1 callback:(const struct function<void (const std::__1::error_code &, const spotify::uri::SpotifyLink &, const std::__1::shared_ptr<const spotify::metadata::ArtistMetadata>&)> *)arg2;
@end

