/* Generated by RuntimeBrowser.
 */

@protocol MDRenderTarget <NSObject>

@required

- (double)contentScale;
- (struct Device { int x1; struct shared_ptr<ggl::Device> { struct Device {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct unique_ptr<md::SharedDeviceResources, std::__1::default_delete<md::SharedDeviceResources> > { struct __compressed_pair<md::SharedDeviceResources *, std::__1::default_delete<md::SharedDeviceResources> > { struct SharedDeviceResources {} *x_1_2_1; } x_3_1_1; } x3; }*)device;
- (const struct RenderTargetFormat { int x1[4]; unsigned long long x2; unsigned int x3; int x4; }*)format;
- (bool)multiSample;
- (bool)shouldRasterize;
- (struct CGSize { double x1; double x2; })size;
- (struct CGSize { double x1; double x2; })sizeInPixels;

@optional

- (float)averageFPS;
- (void)didDrawView;
- (void)willDrawView;

@end
