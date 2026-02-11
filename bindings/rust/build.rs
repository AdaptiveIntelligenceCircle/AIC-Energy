use std::env; 
use std::path::PathBuf; 

fn main()
{
    // Thu muc chua libaic_energy.so/.dll/.a
    let aic_lib_dir = env::var("AIC_Energy_LIB_DIR")
    .unwrap_or_else(|_| "../core/build".into());
    
    println!("cargo:rustc-link-search=native={}", aic_lib_dir);
    println!("cargo:rustc-link-lib=dylib=aic_energy");

    // Rebuild nếu header thay đổi
    println!("cargo:rerun-if-changed=../include/aic_binding_api.h");
    println!("cargo:rerun-if-changed=../include/aic_binding_types.h");
}